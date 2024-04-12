void fun()
{
  int entity_8 = 85;
  char entity_4[87] = "";
  entity_4 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(94*sizeof(char));
  entity_6[94-1]='';
  memset(entity_4, 'n', 87-1);
  entity_4[87-1]='';
  memcpy(entity_6, entity_4, 87*sizeof(char));
}