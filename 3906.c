void fun()
{
  int entity_1 = 31;
  int entity_2 = 52;
  entity_2 = 9;
  char entity_6[entity_2] = "";
  entity_6 = NULL;
  char* entity_4;
  memset(entity_6, 'J', entity_2-1);
  entity_6[entity_2-1]='';
  entity_4 = (char*)malloc(52*sizeof(char));
  entity_4[52-1]='';
  entity_6[44] = 'b';
}