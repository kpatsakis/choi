void fun()
{
  int entity_7 = 9;
  char entity_8[74] = "";
  entity_8 = NULL;
  char* entity_2;
  char* entity_5;
  entity_5 = (char*)malloc(97*sizeof(char));
  entity_5[97-1]='';
  memset(entity_8, 'd', 74-1);
  entity_8[74-1]='';
  entity_2 = (char*)malloc(24*sizeof(char));
  entity_2[24-1]='';
  strcpy(entity_5, entity_8);
}