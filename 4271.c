void fun()
{
  int entity_3 = 12;
  char* entity_5;
  char* entity_6;
  char entity_4[5] = "";
  entity_4 = NULL;
  memset(entity_4, 'H', 5-1);
  entity_4[5-1]='';
  entity_6 = (char*)malloc(3*sizeof(char));
  entity_6[3-1]='';
  entity_5 = (char*)malloc(13*sizeof(char));
  entity_5[13-1]='';
  memcpy(entity_5, entity_4, 5*sizeof(char));
}