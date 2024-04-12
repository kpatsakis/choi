void fun()
{
  char entity_7 = 'd';
  char entity_5[92] = "";
  entity_5 = NULL;
  char* entity_0;
  char entity_8[89] = "";
  entity_8 = NULL;
  memset(entity_8, 'z', 89-1);
  entity_8[89-1]='';
  entity_0 = (char*)malloc(24*sizeof(char));
  entity_0[24-1]='';
  memset(entity_5, 'O', 92-1);
  entity_5[92-1]='';
  memcpy(entity_0, entity_8, 89*sizeof(char));
}