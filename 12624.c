void fun()
{
  int entity_0 = 60;
  char* entity_5;
  char* entity_6;
  char entity_9[67] = "";
  entity_6 = (char*)malloc(81*sizeof(char));
  entity_6[0]='0';
  entity_5 = (char*)malloc(entity_0*sizeof(char));
  entity_5[0]='0';
  memset(entity_9, 'w', 67-1);
  entity_9[67-1]='0';
  strcpy(entity_5, entity_9);
}