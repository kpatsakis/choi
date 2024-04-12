void fun()
{
  int entity_4 = 60;
  char entity_6 = 'M';
  char entity_3[entity_4] = "";
  entity_3 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(14*sizeof(char));
  entity_7[14-1]='';
  memset(entity_3, 'a', entity_4-1);
  entity_3[entity_4-1]='';
  strcpy(entity_7, entity_3);
}