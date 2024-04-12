void fun()
{
  int entity_6 = 99;
  char entity_1 = 'z';
  char entity_9 = 'a';
  char entity_2[11] = "";
  entity_2 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(entity_6*sizeof(char));
  entity_3[entity_6-1]='';
  memset(entity_2, 'e', 11-1);
  entity_2[11-1]='';
  strcpy(entity_3, entity_2);
}