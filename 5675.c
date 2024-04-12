void fun()
{
  int entity_2 = 49;
  char entity_8[20] = "";
  entity_8 = NULL;
  char* entity_3;
  char entity_7 = 'e';
  entity_3 = (char*)malloc(16*sizeof(char));
  entity_3[16-1]='';
  memset(entity_8, 'i', 20-1);
  entity_8[20-1]='';
  entity_2 = 26;
  entity_8[entity_2] = 'F';
}