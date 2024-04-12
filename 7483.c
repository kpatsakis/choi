void fun()
{
  char entity_8[89] = "";
  entity_8 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(88*sizeof(char));
  entity_2[88-1]='';
  memset(entity_8, 'A', 89-1);
  entity_8[89-1]='';
  memcpy(entity_2, entity_8, 89*sizeof(char));
}