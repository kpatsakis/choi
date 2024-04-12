void fun()
{
  int entity_0 = 3;
  int entity_8 = 57;
  entity_8 = 51;
  char* entity_3;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  char entity_1[68] = "";
  entity_1 = NULL;
  entity_3 = (char*)malloc(10*sizeof(char));
  entity_3[10-1]='';
  memset(entity_7, 'T', entity_8-1);
  entity_7[entity_8-1]='';
  memset(entity_1, 'n', 68-1);
  entity_1[68-1]='';
  memcpy(entity_3, entity_7, entity_8*sizeof(char));
}