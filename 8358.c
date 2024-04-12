void fun()
{
  int entity_4 = 10;
  int entity_9 = 70;
  int entity_7 = 74;
  int entity_3 = 6;
  char* entity_2;
  char entity_0[67] = "";
  entity_0 = NULL;
  memset(entity_0, 'v', 67-1);
  entity_0[67-1]='';
  entity_2 = (char*)malloc(entity_7*sizeof(char));
  entity_2[entity_7-1]='';
  entity_7 = 75;
  strcpy(entity_2, entity_0);
}