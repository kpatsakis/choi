void fun()
{
  char* entity_4;
  char entity_7[84] = "";
  entity_7 = NULL;
  char entity_2[14] = "";
  entity_2 = NULL;
  memset(entity_2, 'a', 14-1);
  entity_2[14-1]='';
  memset(entity_7, 'Y', 84-1);
  entity_7[84-1]='';
  entity_4 = (char*)malloc(53*sizeof(char));
  entity_4[53-1]='';
  memcpy(entity_4, entity_2, 14*sizeof(char));
}