void fun()
{
  int entity_5 = 56;
  char* entity_2;
  char entity_8[85] = "";
  entity_8 = NULL;
  memset(entity_8, 'F', 85-1);
  entity_8[85-1]='';
  entity_2 = (char*)malloc(85*sizeof(char));
  entity_2[85-1]='';
  memcpy(entity_2, entity_8, 85*sizeof(char));
}