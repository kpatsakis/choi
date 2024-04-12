void fun()
{
  int entity_2 = 84;
  char entity_4[8] = "";
  entity_4 = NULL;
  char* entity_8;
  char entity_9 = 'w';
  char entity_7[2] = "";
  entity_7 = NULL;
  entity_8 = (char*)malloc(20*sizeof(char));
  entity_8[20-1]='';
  memset(entity_4, 'h', 8-1);
  entity_4[8-1]='';
  memset(entity_7, 'a', 2-1);
  entity_7[2-1]='';
  entity_2 = 98;
  entity_7[entity_2] = 'v';
}