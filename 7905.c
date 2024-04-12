void fun()
{
  int entity_4 = 21;
  char entity_7[48] = "";
  entity_7 = NULL;
  char* entity_8;
  memset(entity_7, 'p', 48-1);
  entity_7[48-1]='';
  entity_8 = (char*)malloc(87*sizeof(char));
  entity_8[87-1]='';
  entity_4 = 76;
  entity_7[entity_4] = 'g';
}