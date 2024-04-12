void fun()
{
  int entity_2 = 94;
  int entity_1 = 7;
  int entity_3 = 57;
  entity_2 = 25;
  char entity_4[71] = "";
  entity_4 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(20*sizeof(char));
  entity_9[20-1]='';
  memset(entity_4, 'x', 71-1);
  entity_4[71-1]='';
  entity_4[entity_2] = 'W';
}