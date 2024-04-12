void fun()
{
  char* entity_6;
  char entity_2 = 'L';
  char entity_0[78] = "";
  entity_0 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(66*sizeof(char));
  entity_9[66-1]='';
  entity_6 = (char*)malloc(83*sizeof(char));
  entity_6[83-1]='';
  memset(entity_0, 'z', 78-1);
  entity_0[78-1]='';
  memcpy(entity_6, entity_0, 78*sizeof(char));
}