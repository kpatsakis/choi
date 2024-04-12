void fun()
{
  int entity_1 = 33;
  char entity_9[34] = "";
  entity_9 = NULL;
  char* entity_3;
  char entity_2[1] = "";
  entity_2 = NULL;
  memset(entity_9, 'L', 34-1);
  entity_9[34-1]='';
  memset(entity_2, 'z', 1-1);
  entity_2[1-1]='';
  entity_3 = (char*)malloc(58*sizeof(char));
  entity_3[58-1]='';
  entity_2[entity_1] = 'e';
}