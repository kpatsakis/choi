void fun()
{
  int entity_2 = 17;
  char entity_8[85] = "";
  entity_8 = NULL;
  char* entity_3;
  memset(entity_8, 'z', 85-1);
  entity_8[85-1]='';
  entity_3 = (char*)malloc(90*sizeof(char));
  entity_3[90-1]='';
  strcpy(entity_3, entity_8);
}