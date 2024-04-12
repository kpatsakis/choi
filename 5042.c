void fun()
{
  int entity_6 = 80;
  char entity_3[79] = "";
  entity_3 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(entity_6*sizeof(char));
  entity_4[entity_6-1]='';
  memset(entity_3, 'D', 79-1);
  entity_3[79-1]='';
  entity_6 = 78;
  strcpy(entity_4, entity_3);
}