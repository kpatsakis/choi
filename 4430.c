void fun()
{
  int entity_5 = 90;
  char* entity_4;
  char entity_7[97] = "";
  entity_7 = NULL;
  char* entity_6;
  entity_4 = (char*)malloc(87*sizeof(char));
  entity_4[87-1]='';
  memset(entity_7, 'u', 97-1);
  entity_7[97-1]='';
  entity_6 = (char*)malloc(4*sizeof(char));
  entity_6[4-1]='';
  memcpy(entity_4, entity_7, 97*sizeof(char));
}