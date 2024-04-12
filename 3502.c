void fun()
{
  int entity_6 = 94;
  int entity_1 = 16;
  char* entity_2;
  char entity_7[entity_6] = "";
  entity_7 = NULL;
  char entity_3 = 'Z';
  memset(entity_7, 'W', entity_6-1);
  entity_7[entity_6-1]='';
  entity_2 = (char*)malloc(88*sizeof(char));
  entity_2[88-1]='';
  entity_6 = 74;
  strcpy(entity_2, entity_7);
}