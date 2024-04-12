void fun()
{
  int entity_8 = 62;
  int entity_6 = 15;
  char entity_4[95] = "";
  entity_4 = NULL;
  char* entity_7;
  char entity_3[18] = "";
  entity_3 = NULL;
  memset(entity_3, 'r', 18-1);
  entity_3[18-1]='';
  entity_7 = (char*)malloc(17*sizeof(char));
  entity_7[17-1]='';
  memset(entity_4, 'd', 95-1);
  entity_4[95-1]='';
  memcpy(entity_7, entity_3, 18*sizeof(char));
}