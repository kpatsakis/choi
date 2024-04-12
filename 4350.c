void fun()
{
  int entity_0 = 92;
  entity_0 = 89;
  char* entity_4;
  char entity_3[70] = "";
  entity_3 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(entity_0*sizeof(char));
  entity_2[entity_0-1]='';
  entity_4 = (char*)malloc(96*sizeof(char));
  entity_4[96-1]='';
  memset(entity_3, 'j', 70-1);
  entity_3[70-1]='';
  memcpy(entity_2, entity_3, 70*sizeof(char));
}