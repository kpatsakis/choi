void fun()
{
  int entity_3 = 58;
  int entity_6 = 27;
  char entity_1[61] = "";
  entity_1 = NULL;
  char entity_0 = 'g';
  char* entity_8;
  char* entity_7;
  memset(entity_1, 'u', 61-1);
  entity_1[61-1]='';
  entity_8 = (char*)malloc(20*sizeof(char));
  entity_8[20-1]='';
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[entity_6-1]='';
  strcpy(entity_7, entity_1);
}