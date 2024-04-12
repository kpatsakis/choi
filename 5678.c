void fun()
{
  int entity_9 = 48;
  char* entity_3;
  char* entity_8;
  char entity_6[62] = "";
  entity_6 = NULL;
  entity_8 = (char*)malloc(85*sizeof(char));
  entity_8[85-1]='';
  memset(entity_6, 'u', 62-1);
  entity_6[62-1]='';
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[entity_9-1]='';
  strcpy(entity_3, entity_6);
}