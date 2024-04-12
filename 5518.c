void fun()
{
  int entity_8 = 65;
  char entity_3[94] = "";
  entity_3 = NULL;
  char entity_0 = 'U';
  char* entity_4;
  memset(entity_3, 'Q', 94-1);
  entity_3[94-1]='';
  entity_4 = (char*)malloc(85*sizeof(char));
  entity_4[85-1]='';
  memcpy(entity_4, entity_3, 94*sizeof(char));
}