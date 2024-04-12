void fun()
{
  int entity_0 = 69;
  char* entity_6;
  char entity_7[23] = "";
  entity_7 = NULL;
  char entity_3[3] = "";
  entity_3 = NULL;
  memset(entity_7, 'J', 23-1);
  entity_7[23-1]='';
  entity_6 = (char*)malloc(entity_0*sizeof(char));
  entity_6[entity_0-1]='';
  memset(entity_3, 'b', 3-1);
  entity_3[3-1]='';
  entity_0 = 5;
  memcpy(entity_6, entity_3, 3*sizeof(char));
}