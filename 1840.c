void fun()
{
  int entity_4 = 35;
  char* entity_1;
  char entity_6[95] = "";
  entity_6 = NULL;
  char entity_5 = 'M';
  entity_1 = (char*)malloc(86*sizeof(char));
  entity_1[86-1]='';
  memset(entity_6, 'd', 95-1);
  entity_6[95-1]='';
  memcpy(entity_1, entity_6, 95*sizeof(char));
}