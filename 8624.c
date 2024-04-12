void fun()
{
  int entity_3 = 65;
  entity_3 = 31;
  char entity_2[67] = "";
  entity_2 = NULL;
  char entity_1 = 'j';
  char entity_0 = 'z';
  char* entity_9;
  entity_9 = (char*)malloc(entity_3*sizeof(char));
  entity_9[entity_3-1]='';
  memset(entity_2, 'c', 67-1);
  entity_2[67-1]='';
  strcpy(entity_9, entity_2);
}