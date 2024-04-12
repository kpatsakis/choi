void fun()
{
  int entity_8 = 70;
  char entity_4[40] = "";
  entity_4 = NULL;
  char* entity_7;
  char entity_2[4] = "";
  entity_2 = NULL;
  entity_7 = (char*)malloc(12*sizeof(char));
  entity_7[12-1]='';
  memset(entity_2, 'L', 4-1);
  entity_2[4-1]='';
  memset(entity_4, 'z', 40-1);
  entity_4[40-1]='';
  memcpy(entity_7, entity_4, 40*sizeof(char));
}