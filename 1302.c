void fun()
{
  int entity_0 = 42;
  char entity_3[entity_0] = "";
  entity_3 = NULL;
  char* entity_7;
  char* entity_1;
  char entity_6 = 'd';
  entity_7 = (char*)malloc(84*sizeof(char));
  entity_7[84-1]='';
  memset(entity_3, 'j', entity_0-1);
  entity_3[entity_0-1]='';
  entity_1 = (char*)malloc(68*sizeof(char));
  entity_1[68-1]='';
  memcpy(entity_1, entity_3, entity_0*sizeof(char));
}