void fun()
{
  char entity_8[70] = "";
  entity_8 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(57*sizeof(char));
  entity_3[57-1]='';
  memset(entity_8, 'E', 70-1);
  entity_8[70-1]='';
  memcpy(entity_3, entity_8, 70*sizeof(char));
}