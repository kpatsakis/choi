void fun()
{
  int entity_3 = 19;
  int entity_5 = 46;
  char entity_6[74] = "";
  entity_6 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(93*sizeof(char));
  entity_8[93-1]='';
  memset(entity_6, 'p', 74-1);
  entity_6[74-1]='';
  entity_5 = 6;
  entity_6[entity_5] = 'I';
}