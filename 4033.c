void fun()
{
  int entity_6 = 49;
  entity_6 = 34;
  char entity_9[64] = "";
  entity_9 = NULL;
  char* entity_7;
  char entity_4 = 'b';
  char entity_8[40] = "";
  entity_8 = NULL;
  memset(entity_9, 't', 64-1);
  entity_9[64-1]='';
  memset(entity_8, 'L', 40-1);
  entity_8[40-1]='';
  entity_7 = (char*)malloc(56*sizeof(char));
  entity_7[56-1]='';
  entity_9[entity_6] = 'I';
}