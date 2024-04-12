void fun()
{
  int entity_1 = 72;
  char* entity_7;
  char entity_6[entity_1] = "";
  entity_6 = NULL;
  entity_7 = (char*)malloc(52*sizeof(char));
  entity_7[52-1]='';
  memset(entity_6, 'u', entity_1-1);
  entity_6[entity_1-1]='';
  entity_1 = 58;
  entity_6[70] = 'r';
}