void fun()
{
  int entity_1 = 80;
  int entity_6 = 70;
  char* entity_2;
  char entity_8[97] = "";
  entity_8 = NULL;
  char entity_3[16] = "";
  entity_3 = NULL;
  entity_2 = (char*)malloc(entity_1*sizeof(char));
  entity_2[entity_1-1]='';
  memset(entity_8, 'o', 97-1);
  entity_8[97-1]='';
  memset(entity_3, 'O', 16-1);
  entity_3[16-1]='';
  memcpy(entity_2, entity_3, 16*sizeof(char));
}