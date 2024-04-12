void fun()
{
  int entity_3 = 97;
  entity_3 = 94;
  char* entity_6;
  char entity_8[53] = "";
  entity_8 = NULL;
  char entity_2[8] = "";
  entity_2 = NULL;
  entity_6 = (char*)malloc(91*sizeof(char));
  entity_6[91-1]='';
  memset(entity_2, 'f', 8-1);
  entity_2[8-1]='';
  memset(entity_8, 'q', 53-1);
  entity_8[53-1]='';
  entity_2[entity_3] = 'K';
}