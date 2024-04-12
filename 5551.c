void fun()
{
  int entity_1 = 92;
  char entity_4[99] = "";
  entity_4 = NULL;
  char* entity_6;
  char entity_7[92] = "";
  entity_7 = NULL;
  memset(entity_7, 'V', 92-1);
  entity_7[92-1]='';
  memset(entity_4, 'y', 99-1);
  entity_4[99-1]='';
  entity_6 = (char*)malloc(entity_1*sizeof(char));
  entity_6[entity_1-1]='';
  entity_1 = 31;
  strcpy(entity_6, entity_4);
}