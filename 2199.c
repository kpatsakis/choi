void fun()
{
  int entity_2 = 90;
  char entity_7[58] = "";
  entity_7 = NULL;
  char* entity_5;
  char entity_6[3] = "";
  entity_6 = NULL;
  memset(entity_7, 'j', 58-1);
  entity_7[58-1]='';
  entity_5 = (char*)malloc(48*sizeof(char));
  entity_5[48-1]='';
  memset(entity_6, 'R', 3-1);
  entity_6[3-1]='';
  memcpy(entity_5, entity_7, 58*sizeof(char));
}