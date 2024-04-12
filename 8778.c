void fun()
{
  int entity_6 = 62;
  char* entity_3;
  char entity_2[58] = "";
  entity_2 = NULL;
  char* entity_8;
  entity_3 = (char*)malloc(35*sizeof(char));
  entity_3[35-1]='';
  entity_8 = (char*)malloc(94*sizeof(char));
  entity_8[94-1]='';
  memset(entity_2, 'v', 58-1);
  entity_2[58-1]='';
  memcpy(entity_8, entity_2, 58*sizeof(char));
}