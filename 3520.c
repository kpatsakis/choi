void fun()
{
  int entity_4 = 21;
  char entity_5 = 'U';
  char entity_3[46] = "";
  entity_3 = NULL;
  char entity_6 = 'J';
  char entity_1[11] = "";
  entity_1 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[entity_4-1]='';
  memset(entity_3, 'Z', 46-1);
  entity_3[46-1]='';
  memset(entity_1, 'z', 11-1);
  entity_1[11-1]='';
  memcpy(entity_2, entity_3, 46*sizeof(char));
}