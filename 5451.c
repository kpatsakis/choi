void fun()
{
  int entity_2 = 96;
  char* entity_1;
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(61*sizeof(char));
  entity_8[61-1]='';
  entity_1 = (char*)malloc(84*sizeof(char));
  entity_1[84-1]='';
  memset(entity_7, 'L', entity_2-1);
  entity_7[entity_2-1]='';
  memcpy(entity_1, entity_7, entity_2*sizeof(char));
}