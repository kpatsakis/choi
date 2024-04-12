void fun()
{
  int entity_6 = 4;
  int entity_7 = 93;
  int entity_3 = 78;
  char* entity_1;
  char entity_2[entity_6] = "";
  entity_2 = NULL;
  memset(entity_2, 'O', entity_6-1);
  entity_2[entity_6-1]='';
  entity_1 = (char*)malloc(67*sizeof(char));
  entity_1[67-1]='';
  strcpy(entity_1, entity_2);
}