void fun()
{
  int entity_9 = 5;
  entity_9 = 77;
  char entity_3[70] = "";
  entity_3 = NULL;
  char entity_0[76] = "";
  entity_0 = NULL;
  char* entity_2;
  memset(entity_3, 'j', 70-1);
  entity_3[70-1]='';
  memset(entity_0, 'u', 76-1);
  entity_0[76-1]='';
  entity_2 = (char*)malloc(entity_9*sizeof(char));
  entity_2[entity_9-1]='';
  memcpy(entity_2, entity_3, 70*sizeof(char));
}