void fun()
{
  char entity_8[3] = "";
  entity_8 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(57*sizeof(char));
  entity_2[57-1]='';
  memset(entity_8, 'O', 3-1);
  entity_8[3-1]='';
  memcpy(entity_2, entity_8, 3*sizeof(char));
}