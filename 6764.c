void fun()
{
  int entity_8 = 43;
  char entity_2 = 'e';
  char entity_1[6] = "";
  entity_1 = NULL;
  char* entity_9;
  memset(entity_1, 'D', 6-1);
  entity_1[6-1]='';
  entity_9 = (char*)malloc(83*sizeof(char));
  entity_9[83-1]='';
  entity_1[entity_8] = 'q';
}