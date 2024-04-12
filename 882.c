void fun()
{
  int entity_3 = 6;
  entity_3 = 44;
  char entity_2[74] = "";
  entity_2 = NULL;
  char* entity_1;
  char entity_9[14] = "";
  entity_9 = NULL;
  memset(entity_2, 'B', 74-1);
  entity_2[74-1]='';
  memset(entity_9, 'v', 14-1);
  entity_9[14-1]='';
  entity_1 = (char*)malloc(47*sizeof(char));
  entity_1[47-1]='';
  entity_2[entity_3] = 'g';
}