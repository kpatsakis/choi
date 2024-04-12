void fun()
{
  int entity_3 = 97;
  entity_3 = 46;
  char* entity_1;
  char entity_2[entity_3] = "";
  char* entity_0;
  memset(entity_2, 'j', entity_3-1);
  entity_2[entity_3-1]='0';
  entity_1 = (char*)malloc(61*sizeof(char));
  entity_1[0]='0';
  entity_0 = (char*)malloc(72*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_2, entity_3*sizeof(char));
}