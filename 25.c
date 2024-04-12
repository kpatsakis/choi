void fun()
{
  int entity_4 = 15;
  char entity_5[6] = "";
  entity_5 = NULL;
  char entity_6[61] = "";
  entity_6 = NULL;
  char* entity_2;
  char* entity_8;
  entity_8 = (char*)malloc(86*sizeof(char));
  entity_8[86-1]='';
  memset(entity_6, 'g', 61-1);
  entity_6[61-1]='';
  memset(entity_5, 'p', 6-1);
  entity_5[6-1]='';
  entity_2 = (char*)malloc(97*sizeof(char));
  entity_2[97-1]='';
  memcpy(entity_2, entity_6, 61*sizeof(char));
}