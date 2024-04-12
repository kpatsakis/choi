void fun()
{
  int entity_0 = 2;
  char entity_9[76] = "";
  entity_9 = NULL;
  char* entity_3;
  char* entity_1;
  entity_3 = (char*)malloc(entity_0*sizeof(char));
  entity_3[entity_0-1]='';
  memset(entity_9, 'g', 76-1);
  entity_9[76-1]='';
  entity_1 = (char*)malloc(82*sizeof(char));
  entity_1[82-1]='';
  entity_0 = 96;
  memcpy(entity_3, entity_9, 76*sizeof(char));
}