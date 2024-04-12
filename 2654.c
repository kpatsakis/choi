void fun()
{
  int entity_5 = 6;
  int entity_0 = 23;
  entity_0 = 26;
  char* entity_6;
  char* entity_8;
  char entity_9[87] = "";
  entity_9 = NULL;
  entity_6 = (char*)malloc(entity_0*sizeof(char));
  entity_6[entity_0-1]='';
  memset(entity_9, 'p', 87-1);
  entity_9[87-1]='';
  entity_8 = (char*)malloc(94*sizeof(char));
  entity_8[94-1]='';
  memcpy(entity_6, entity_9, 87*sizeof(char));
}