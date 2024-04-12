void fun()
{
  int entity_3 = 93;
  char* entity_9;
  char* entity_2;
  char entity_8[36] = "";
  entity_8 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(entity_3*sizeof(char));
  entity_7[entity_3-1]='';
  entity_9 = (char*)malloc(35*sizeof(char));
  entity_9[35-1]='';
  memset(entity_8, 'v', 36-1);
  entity_8[36-1]='';
  entity_2 = (char*)malloc(99*sizeof(char));
  entity_2[99-1]='';
  entity_3 = 97;
  strcpy(entity_7, entity_8);
}